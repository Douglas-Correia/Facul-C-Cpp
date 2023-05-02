<?php 
    if(isset($_COOKIE['username'])){
        $username = $_COOKIE['username'];
        echo "O username é: ".$username ."<br>";
    } else{
        echo "Não existe nenhum cookie com o nome $username";
    }
    echo "As cookies recebidas são: <br>";
    foreach($_COOKIE as $nomecookie => $valorcookie){
        echo "Cookie $nomecookie tem o valor $valorcookie";
    }

?>