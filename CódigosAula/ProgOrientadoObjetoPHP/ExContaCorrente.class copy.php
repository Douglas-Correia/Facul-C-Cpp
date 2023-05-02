<?php 
    class ExContaCorrente {
        public $nome;
        public $agencia;
        public $numeroConta;
        public $saldo;

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