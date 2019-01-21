Action()
{
//ok ssd go to bhusawal
	web_url("blazedemo.com",
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("web_custom_request",
		"URL=www.github.com",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_submit_data("reserve.php", 
		"Action=http://blazedemo.com/reserve.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://blazedemo.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=fromPort", "Value=Boston", ENDITEM, 
		"Name=toPort", "Value=London", ENDITEM, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_submit_form("purchase.php", 
		"Ordinal=2", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		LAST);

	lr_think_time(43);

	web_submit_form("confirmation.php", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=inputName", "Value=Majed", ENDITEM, 
		"Name=address", "Value=sadaf colony", ENDITEM, 
		"Name=city", "Value=aurangabad", ENDITEM, 
		"Name=state", "Value=maharashtra", ENDITEM, 
		"Name=zipCode", "Value=431001", ENDITEM, 
		"Name=cardType", "Value=Visa", ENDITEM, 
		"Name=creditCardNumber", "Value=", ENDITEM, 
		"Name=creditCardMonth", "Value=11", ENDITEM, 
		"Name=creditCardYear", "Value=2023", ENDITEM, 
		"Name=nameOnCard", "Value=Majed Khan", ENDITEM, 
		"Name=rememberMe", "Value=<OFF>", ENDITEM, 
		LAST);

	return 0;
}