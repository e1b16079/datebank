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
        $get_val1 = $_POST["name"];
        $get_val2 = $_POST["data"];
	$fp = fopen("data.txt", "aw+");
	  fwrite($fp,$get_val1.'<br>');
	  fwrite($fp,$get_val2.'<br>');
	fclose($fp);
    ?>
    <form action = "work4.php" method = "post">
      <input value = "戻る" type = "submit"/>
    </form>
  </body>
</html>