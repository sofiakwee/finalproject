<!DOCTYPE html>
<html>
  <head>
    <title>Calculator </title>
  </head>


  <body>

    <h1>Calculator </h1>
    <p>Input 2 values and a symbol(+ addition; - subtraction; x multiplication; / division </p>
    <?php
       // define variables and set to empty values
       $value1 = $symbol =  $value2 = $output = $retc = "";

       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $value1 = test_input($_POST["value1"]);
         $symbol = test_input($_POST["symbol"]);
	 $value2 = test_input($_POST["value2"]);
         exec("/finalproject/calculator  " . $value1 . " " . $symbol, $value2, $output, $retc); 
       }

       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      value1: <input type="text" name="value1"><br>
      symbol: <input type="text" name="symbol"><br>
      value2: <input type="text" name="value2"><br>
      <br>
      <input type="submit" value="Calculate!">
    </form>

    <?php
       // only display if return code is numeric - i.e. exec has been called
       if (is_numeric($retc)) {
         echo "<h2>Your Input:</h2>";
         echo $value1;
         echo "<br>";
         echo $symbol;
         echo "<br>";
	 echo $value2;
	 echo "<br>";
         echo "<h2>Program Output (an array):</h2>";
         foreach ($output as $line) {
           echo $line;
           echo "<br>";
         }
       
         echo "<h2>Program Return Code:</h2>";
         echo $retc;
       }
    ?>
    
  </body>
</html>
