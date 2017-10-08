$(document).on('click','.statusButton', function() { 

var $status = "";
var $id = "";
var $row = $(this).closest("tr"),        // Finds the closest row <tr> 
    $tds = $row.find("td:nth-child(4)"); // Finds the 2nd <td> element

$.each($tds, function() {                // Visits every single <td> element
    $status=$(this).text();         // Prints out the text within the <td>
});
$row = $(this).closest("tr"),        // Finds the closest row <tr> 
    $tds = $row.find("td:nth-child(5)");
$.each($tds, function() {                // Visits every single <td> element
    $id=$(this).text();         // Prints out the text within the <td>
	
})
$(this).prop('disabled', true);
$(this).text("DONE");
$.get("/string",{"id":$id,"status":$status}, function(string) {
    alert(JSON.stringify(string));
}); 
});
$( document ).ready(function() {
    $.get("/getData", function(dataValue) {
    //alert(dataValue);
	var data = dataValue;
	createTable(data);
});
});