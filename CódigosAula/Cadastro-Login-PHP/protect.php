<?php 
    // REVIVENDO A SESSÃO
    if(!isset($_SESSION)){
        session_start();
    }

    if(!isset($_SESSION['Id'])){
        die("Você não pode acessar esta página, você não está logado!.<p><a href=\"index.html\">Entrar</a></p>");
    }   
?>
