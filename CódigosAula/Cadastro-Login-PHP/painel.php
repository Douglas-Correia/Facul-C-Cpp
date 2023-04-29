<?php 
    include('protect.php');
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Painel de usuário</title>
</head>
<body>
    <header>
        <h1>Bem-Vindo ao painel de Usuário <?php echo $_SESSION['Nome'];?></h1>

        <p>
            <a href="logout.php">Sair</a>
        </p>
    </header>
    
</body>
</html>