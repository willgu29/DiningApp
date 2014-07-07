
// Use Parse.Cloud.define to define as many cloud functions as you want.
// For example:
Parse.Cloud.define("hello", function(request, response) {
  response.success("Hello world!");
});

Parse.Cloud.define("pushTest", function(request, response) {
	
	var query = new Parse.Query(Parse.Installation);
	query.equalTo("favorites", "Fried Eggs");
 
	Parse.Push.send({
		where: query, // Set our Installation query
		    data: {
		    alert: "testing cloud code"
			}
	    }, {
		success: function() {
		    // Push was successful
		},
		    error: function(error) {
		    // Handle error
		}
	    });   

    });