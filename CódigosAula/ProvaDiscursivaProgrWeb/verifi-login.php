<?php 
    // CONECTAR NO BANCO DE DADOS
   // $mysqli = new mysqli('mysql:host=localhost; dbname=formulario_usuarios', 'root', '');
   $usuario = 'root';
   $senha = '';
   $database = 'usuario_fael';
   $host = 'localhost';

   $mysqli = new mysqli($host, $usuario, $senha, $database);

   if($mysqli->error){
    die("Falha na conexão com banco: ".$mysqli->error);
   }
    if(isset($_POST['entrar'])){
        if(isset($_POST['usuario']) || isset($_POST['senha'])){
            if(strlen($_POST['usuario']) == 0){
                strip_tags($_POST['usuario']);
            } 
            else if(strlen($_POST['senha']) == 0){
                strip_tags($_POST['senha']);
            } 
            else {
                $usuario = $mysqli->real_escape_string($_POST['usuario']);
                $senha = $mysqli->real_escape_string($_POST['senha']);

                $query_code = "SELECT * FROM usuarios WHERE usuario = '$usuario' AND Senha = '$senha'";
                $sql_query = $mysqli->query($query_code) or die("Falha na execução do código SQL: ".$mysqli->error);

                $quantidades = $sql_query->num_rows;

                if($quantidades == 1){
                    $usuario = $sql_query->fetch_assoc();

                    // CRIAR SESSÃO PARA A VARIAVEL FICAR LOGADO NAS PAGINAS MESMO QUE DEMORE UM TEMPO
                    if(!isset($_SESSION)){
                        session_start();
                    }
                    $_SESSION['id'] = $usuario['id'];
                    $_SESSION['usuario'] = $usuario['usuario'];

                    // REDIRECIONANDO O USUARIO PARA A PÁGINA
                    header("Location: painel_fael.php");

                }
                 else {
                    echo "Falha ao logar! E-mail ou Senha incorretos <p><a href=\"login.php\">Voltar</a></p>";
                }
            }
        }
    }

?>
