var express = require('express');
var app = express();
var path = require('path');

// viewed at http://localhost:8080
app.get('/', function(req, res) {
    res.sendFile(path.join(__dirname + '/index.html'));
});


app.use('/scripts', express.static(__dirname + ''));
app.get("/string", function(req, res) {
    //res.send(req.query.id+" "+req.query.status);
	res.send(onClickModifyStatus(req.query.id,req.query.status));
});
app.get("/getData", function(req, res) {
	fs = require('fs');
	var m = fs.readFileSync('Array.js');
	res.send(m);
    
});
app.listen(8080,function(){console.log('app listening on port 8080...');});
function onClickModifyStatus(id,status){
	var fs = require('fs');
	var m = fs.readFileSync('Array.js');
	m=JSON.parse(m);
	m=findAndReplace(m,id,status);
	fs.writeFileSync('Array.js', JSON.stringify(m),'utf8');
	return "DONE";
}
function findAndReplace(object,keyvalue, status) {	
    for(var i=0;i<object.length;i++){
		if(object[i].id==keyvalue){
			object[i].status = 1;
		}
	}
	return object;
}