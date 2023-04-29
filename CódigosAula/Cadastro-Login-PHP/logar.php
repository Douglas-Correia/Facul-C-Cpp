<?php 
    // CONECTAR NO BANCO DE DADOS
   // $mysqli = new mysqli('mysql:host=localhost; dbname=formulario_usuarios', 'root', '');
   $usuario = 'root';
   $senha = '';
   $database = 'formulario_usuarios';
   $host = 'localhost';

   $mysqli = new mysqli($host, $usuario, $senha, $database);

   if($mysqli->error){
    die("Falha na conexão com banco: ".$mysqli->error);
   }
    if(isset($_POST['entrar'])){
        if(isset($_POST['email']) || isset($_POST['senha'])){
            if(strlen($_POST['email']) == 0){
                strip_tags($_POST['email']);
                echo "<style>#erro-email{display: block;}</style>";
            } 
            else if(strlen($_POST['senha']) == 0){
                strip_tags($_POST['senha']);
                echo "<style>#erro-senha{display: block;}</style>";
            } 
            else {
                $email = $mysqli->real_escape_string($_POST['email']);
                $senha = $mysqli->real_escape_string($_POST['senha']);

                $query_code = "SELECT * FROM usuarios WHERE Email = '$email' AND Senha = '$senha'";
                $sql_query = $mysqli->query($query_code) or die("Falha na execução do código SQL: ".$mysqli->error);

                $quantidades = $sql_query->num_rows;

                if($quantidades == 1){
                    $usuario = $sql_query->fetch_assoc();

                    // CRIAR SESSÃO PARA A VARIAVEL FICAR LOGADO NAS PAGINAS MESMO QUE DEMORE UM TEMPO
                    if(!isset($_SESSION)){
                        session_start();
                    }
                    $_SESSION['Id'] = $usuario['Id'];
                    $_SESSION['Nome'] = $usuario['Nome'];

                    // REDIRECIONANDO O USUARIO PARA A PÁGINA
                    header("Location: painel.php");

                }
                 else {
                    echo "Falha ao logar! E-mail ou Senha incorretos <p><a href=\"index.html\">Voltar</a></p>";
                }
            }
        }
    }

?>