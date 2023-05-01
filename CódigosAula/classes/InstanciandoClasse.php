<?php 
    include_once("ContaCorrente.class.php");

    $conta = new ContaCorrente();

    $conta->nome = "Douglas";
    $conta->agencia = 4562;
    $conta->numeroConta = 52642;
    $conta->saldo = 1000.00;

    $conta->mostrarDados();

?>