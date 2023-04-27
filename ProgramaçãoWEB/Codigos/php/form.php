<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Contato enviado</title>
</head>
<body>
    <main>
        <?php
            $nome = $_GET["nome"];
            $telefone = $_GET["telefone"];
            $email = $_GET["email"];
            echo "<p>Vamos entrar em contato com você logo logo</p><br><p>Obrigado pelo contato $nome!";
        ?>
    </main>
    
</body>
</html>