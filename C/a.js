/*
this对象是在运行时基于函数的执行环境绑定的；
在全局函数中this等于window,
而当函数被作为某个对象的方法调用时，
this等于那个对象
*/

var name = "Gloabl";
var object = {
    name:"local",
    fn:function(){
	return this.name;
    },
    getName:function(){
	console.log("1."+this.name);
	return function(){
	    return this.name;
	}
    },
    getFn:function(){
	return this.fn;
    }
};

var fun = object.getName();
console.log("2."+fun());
console.log("3."+fun.apply(object));
console.log("4."+fun.call(object));

var fn = object.getFn();
console.log("5."+fn());
