<?php
//*******************************************************************
//
//		Autor		: BOUDI Ludovic
//		date		: 14-11-2016
//		Description	: Traitement sur les bases de donnees
//*******************************************************************

// declaration des variables necessaires a la connexion
$Server = "monserver.com";
$Login = "monlogin";
$Password = "monpassword";
$Mabase = "mabasededonnee";
$Requete = "marequete";

// declaration des variables de traitement
var $Link;
var $Result;
var $Enregistrement;
// se connecter a la base de donnees
$Link = mysqli_connect($Server, $Login, $Password,$Mabase);
// executer une requete sur la base
$Result = mysqli_query( $Link, $Requete );
// traiter le resultat de la requete
$Enregistrement = mysqli_fetch_assoc($Resultat);
// fermer la base de donnees
mysqli_close($Link);
?>