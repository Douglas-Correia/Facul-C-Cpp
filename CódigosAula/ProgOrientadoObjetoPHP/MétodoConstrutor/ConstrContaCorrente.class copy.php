<?php 
    class ContaCorrente{
        private $nome;
        private $agencia;
        private $numeroConta;
        private $saldo;

        // CRIANDO MÉTODO CONSTRUTOR
        function __construct($nome, $agencia, $numeroConta, $saldo)
        {
            $this->nome = $nome;
            $this->agencia = $agencia;
            $this->numeroConta = $numeroConta;
            $this->saldo = $saldo;
            // Note que utilizamos o termo $this, esse termo serve para indicar que estamos nos referindo ao atributo  da classe
            // e não ao parametro ou variavel local.
        }

        function mostrarDados(){
            echo $this->nome;
            echo "<br>";
            echo $this->agencia;
            echo "<br>";
            echo $this->numeroConta;
            echo "<br>";
            echo $this->saldo;
            echo "<br>";
        }
    }

?>