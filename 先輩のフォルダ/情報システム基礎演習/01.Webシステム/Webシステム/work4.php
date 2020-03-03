<html>
  <head>
    <center>
      <font size = "6">
	一言掲示板<br><br></font>
      <font size = "4">
	自由に書き込もう<br>
  			宣伝：YAMAHAのSR400に乗りましょう！<br><br></font>
    </center>
    </head>
  <body>
    <?php
	$fp = fopen("data.txt", "r");
	while(!feof($fp)){
	  $line = fgets($fp);
	  print $line;
	  print "<br>\n";
	}
	fclose($fp);
    ?>
    <form action = "kakunin.php" method = "post">
      名前：<input type ="text" name = "name"/><br>
      一言：<input type ="text" name = "data"/>
<br>
      <input value = "送信" type = "submit"/>
    </form>
  </body>
</html>