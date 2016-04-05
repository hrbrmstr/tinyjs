// simple function scoping test
var a = 7;
function add(x,y) { var a=x+y; return a; }
var result = add(3,6);
