function addition(a, b) {
    return a + b;
}

function subtraction(a, b) {
    return a - b;
}

function multiplication(a, b) {
    return a * b;
}

function division(a, b) {
    return a / b;
}

// result function with callback
function result(a1, a2, callback) {
    console.log("Result:", callback(a1, a2));
}

// Passing callback while calling
result(20, 10, addition);
result(20, 10, subtraction);
result(20, 10, multiplication);
result(20, 10, division);