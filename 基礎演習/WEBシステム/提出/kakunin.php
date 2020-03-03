<body>

	確認しました
<?php
$fp = fopen('data.txt' , 'aw');
$get_val1 = $_POST['data'];
$get_val2 = $_POST['name'];

fwrite($fp,$get_val1."\n");
fwrite($fp,$get_val2."\n");
fwrite($fp,"\n");

?>


<form action="work4.php" method="post">

	<input value="戻る" type="submit"/>



</form>

</body>
