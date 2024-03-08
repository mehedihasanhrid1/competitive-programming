
function cToF(c) {
    var f = (c * 9/5) + 32;
    return f;
}

var celsius = 30;
var fahrenheit = cToF(celsius);
console.log(celsius + " degrees Celsius is equal to " + fahrenheit + " degrees Fahrenheit.");
