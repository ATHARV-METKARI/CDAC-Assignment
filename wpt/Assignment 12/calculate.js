function calculate(str) {
    let sum = 0;

    for (var i = 0; i < str.length; i++) {
        if (!isNaN(str[i])) {
            sum = sum + Number(str[i]);
        }
    }
    return sum;
}
module.exports = calculate;