/*
this������������ʱ���ں�����ִ�л����󶨵ģ�
��ȫ�ֺ�����this����window,
������������Ϊĳ������ķ�������ʱ��
this�����Ǹ�����
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