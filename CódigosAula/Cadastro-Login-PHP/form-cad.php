<?php 
    if(isset($_POST['cad-usuario'])){
        $nome = strip_tags($_POST['cad-nome']);

        if(filter_var($_POST['cad-email'], FILTER_VALIDATE_EMAIL)){
            $email = strip_tags($_POST['cad-email']);
        }
        $senha = strip_tags($_POST['cad-senha']);

        if($_POST['cad-opcoes'] == 'P'){
            $opcao = strip_tags($_POST['cad-opcoes']);
        }
        else {
            $opcao = strip_tags($_POST['cad-opcoes']);
        }
        
        $servico = strip_tags($_POST['cad-servico']);

        // CONECTAR NO BANCO DE DADOS
        $pdo = new PDO('mysql:host=localhost; dbname=formulario_usuarios', 'root', '');

        $query_sql = $pdo->prepare("INSERT INTO usuarios VALUES (null, ?,?,?,?,?)");

        $query_sql->execute(array($nome,$email,$senha,$opcao,$servico));
        }
        return include('index.html')
?>