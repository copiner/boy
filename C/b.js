
var name = "global";

var obj = {
    name:"from",
    test:function(){
	setTimeout(function(){
	    var name = "local";
	    console.log(this.name);
	},1)
    }
}

obj.test();