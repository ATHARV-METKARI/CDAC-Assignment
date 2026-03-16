function addition(a, b, callback) {
    callback(null, a + b);
}

function subtraction(a, b, callback) {
    callback(null, a - b);
}

function multiplication(a, b, callback) {

    if (b == 0) {
        callback("Error: second parameter cannot be zero", null);
    } else {
        callback(null, a * b);
    }
}

function division(a, b, callback) {

    if (b == 0) {
        callback("Error: second parameter cannot be zero", null);
    } else {
        callback(null, a / b);
    }
}

// result function
function result(error, res) {

    if (error) {
        console.log(error);
    } else {
        console.log("Result:", res);
    }
}

addition(20, 10, result);
subtraction(20, 10, result);
multiplication(20, 10, result);
division(20, 0, result);