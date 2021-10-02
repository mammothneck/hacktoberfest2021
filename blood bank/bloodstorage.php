
<?php
if(isset($_POST['name'])){
    $server = "localhost";
    $username = "root";
    $password = "";

    $con = mysqli_connect( $server ,$username, $password);
    if (!$con){
        die("connection to this database fail due to" .
        mysqli_connect_error());
    }
    // echo "Success connecting to the db";
    $name = $_POST['name'];
    $age = $_POST['age'];
    $gender = $_POST['gender'];
    $bloodgroup = $_POST['bloodgroup'];
    $phone = $_POST['phone'];

    $sql = "  INSERT INTO `bloodstorage`.`bloodstorage` ( `age`, `gender`, `bloodgroup`, `phone`, `name`) VALUES ('$age', '$gender', '$bloodgroup', '$phone', current_timestamp(), '$name');";
    echo $sql;

    if($con->query($sql) == true){
        echo "successfully inserted";
    }
    else{
        echo "error: $sql <br> $con->error";
    }

    $con->close();
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="login.css">
</head>
<body>
    <nav class="navbar background h-nav-resp">
        <ul class="nav-list v-class-resp">
       <li><a href="home.html">Home</a></li>
        <li><a href="#About">About</a></li>
        <li><a href="contact.html">Contact</a></li>
        <li><a href="login.html">Login/Signup</a></li>
         </ul>
         <div class="rightNav v-class-resp">
             <input type="text" name="search" id="search" placeholder="Search">
            

         </div>
         <div class="burger">
             <div class="line"></div>
             <div class="line"></div>
             <div class="line"></div>
         </div>
         </nav>
         <div class="sign-up-form">
            
        <form action="bloodstorage.php" method="POST">
            <input type="text" class="input-box" placeholder="name" id="name">
            <input type="number" class="input-box" placeholder="age" id="age" >
            <input type="text" class="input-box" placeholder="gender" id="gender">
            <input type="text" class="input-box" placeholder="bloodgroup" id="bloodgroup">
            <input type="number" class="input-box" placeholder="phone" id="phone">
            <button   class="signup-btn"  >Submit</button>
        
            
        </form>
        </div>
       

</body>
</html>
