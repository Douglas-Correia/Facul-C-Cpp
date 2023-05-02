<?php 
    include_once("Encapsulamento.class.php");

    $conta = new ContaCorrentes();

    $conta->setNome("Douglas Lincoln");
    echo "Nome: ". $conta->getNome();
    echo "<br>";

    $conta->setAgencia("24567");
    echo "Agencia: ". $conta->getAgencia();
    echo "<br>";

    $conta->setNumeroConta("567843");
    echo "Conta: ". $conta->getNumeroConta();
    echo "<br>";

    $conta->setSaldo("3000.00");
    echo "Saldo: ". $conta->getSaldo();
    echo "<br>";