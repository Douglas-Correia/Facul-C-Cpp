<?php 
    include_once("ExContaCorrente.class.php");

    $conta = new ExContaCorrente();

    $conta->nome = "Douglas";
    $conta->agencia = 4562;
    $conta->numeroConta = 52642;
    $conta->saldo = 1000.00;

    $conta->mostrarDados();

?>