function createTable(data){
	data = JSON.parse(data);
	var table = document.createElement('table');
	for (var i = 0; i < data.length; i++){
		var tr = document.createElement('tr');   

		var td1 = document.createElement('td')
		var td2 = document.createElement('td');
		var td3 = document.createElement('td');
		var td4 = document.createElement('td');
		var td5 = document.createElement('td');
		
		var anchorTagEle= document.createElement('a');
		anchorTagEle.setAttribute("href",data[i].href);
		anchorTagEle.setAttribute("target","_blank");
		anchorTagEle.setAttribute("class","html_links")
		var textValue = document.createTextNode(data[i].text);
		anchorTagEle.appendChild(textValue);
		
		var serialNoElement = document.createElement("p");
		var serialNo = document.createTextNode((i+1)+".\t");
		serialNoElement.appendChild(serialNo);
		
		var buttonElement = document.createElement("button");
		buttonElement.setAttribute("class","statusButton");
		var statusValue = data[i].status;
		var statusText = document.createTextNode("Not Done");
		if(statusValue==1){
			statusText = document.createTextNode("DONE");
			buttonElement.setAttribute("disabled",true);
		}
		buttonElement.appendChild(statusText);

		var difficultyElement = document.createElement("b");
		var difficulty = document.createTextNode(data[i].difficulty);
		difficultyElement.appendChild(difficulty);
		
		var hiddenElement = document.createElement("p");
		var id = document.createTextNode(data[i].id);
		hiddenElement.setAttribute("class","hiddenColumn");
		hiddenElement.appendChild(id);
		
		td1.appendChild(serialNoElement);
		td2.appendChild(anchorTagEle);
		td3.appendChild(difficultyElement);
		td4.appendChild(buttonElement);
		td5.appendChild(hiddenElement);
		
		tr.appendChild(td1);
		tr.appendChild(td2);
		tr.appendChild(td3);
		tr.appendChild(td4);
		tr.appendChild(td5);
		table.appendChild(tr);
	}
	document.body.appendChild(table);
}
