<?php 
    include_once("ConstrContaCorrente.class.php");

    // instanciando e usando o método contrutor
    $conta = new ContaCorrente("Douglas Correia", 15673, 78532, 3000.00);
    
    $conta->mostrarDados();