<?php 
    class ContaCorrentes {
        private $nome;
        private $agencia;
        private $numeroConta;
        private $saldo;

        function getNome(){
            return $this->nome;
        }
        function setNome($nome){
            $this->nome = $nome;
        }

        function getAgencia(){
            return $this->agencia;
        }
        function setAgencia($agencia){
            $this->agencia = $agencia;
        }

        function getNumeroConta(){
            return $this->numeroConta;
        }
        function setNumeroConta($numeroConta){
            $this->numeroConta = $numeroConta;
        }

        function getSaldo(){
            return $this->saldo;
        }
        function setSaldo($saldo){
            $this->saldo = $saldo;
        }


       /* function mostrarDados(){
            echo $this->nome;
            echo "<br>";
            echo $this->agencia;
            echo "<br>";
            echo $this->numeroConta;
            echo "<br>";
            echo $this->saldo;
            echo "<br>";
        } */

    }

?>