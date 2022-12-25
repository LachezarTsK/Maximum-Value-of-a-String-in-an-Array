
/**
 * @param {string[]} input
 * @return {number}
 */
var maximumValue = function (input) {
    let maxValue = 0;
    for (let current of input) {
        let currentValue = Number(current);
        if (isNaN(currentValue)) {
            maxValue = Math.max(maxValue, current.length);
        } else {
            maxValue = Math.max(maxValue, currentValue);
        }
    }
    return maxValue;
};
