<?php 
    if(isset($_POST['cad-usuarios'])){
        $nome = $_POST['cad-nome'];

        if(filter_var($_POST['cad-email'], FILTER_VALIDATE_EMAIL)){
            $email = $_POST['cad-email'];
        }
        $senha = $_POST['cad-senha'];

        if($_POST['cad-opcao'] == 'P'){
            $opcao = $_POST['cad-opcoes'];
        }
        else {
            $opcao = $_POST['cad-opcoes'];
        }
        
        $servico = $_POST['cad-servico'];

        // CONECTAR NO BANCO DE DADOS
        $pdo = new PDO('mysql:host=localhost; dbname=formulario_usuarios', 'root', '');

        $query_sql = $pdo->prepare("INSERT INTO Usuarios VALUES (null, ?,?,?,?,?)");

        $query_sql->execute(array($nome,$email,$senha,$opcao,$servico));
        }
?>