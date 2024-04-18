<html>
<head>
<title></title>
<meta http-equiv="Content-Type"content="text/html;charset=UTF-8">
</head>
<body bgcolor=#663300>
<font color="white"><h1 align=center>Chess Board.</h1></font>
<table width="450px"cellspacing="0px"cellpadding="0px"border="1px" align=center>
<!--cell 450px wide(8 columns x 90px)-->
<?php
for($row=1;$row<=8;$row++)
{
	echo "<tr>";
	for($col=1;$col<=8;$col++)
	{
		$total=$row+$col;
		if($total%2==0)
		{
			echo "<td height=60px width=60px bgcolor=#FFFFFF></td>";
		}
		else
		{
			echo "<td height=60px width=60px bgcolor=#000000></td>";
		}
	}
	echo "</tr>";
}
?>
</table>
</body>
</html>