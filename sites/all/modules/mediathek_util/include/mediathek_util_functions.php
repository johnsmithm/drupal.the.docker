<?php

/**
 * @file
 * MEdiathek util function implementation.
 */

 
function mediathek_util_check_timer($timer){//check if timer format is respected
    if(!preg_match('/^1:[a-zA-Z0-9-_.]*:[0-9]*:[0-9]*:[0-9]*:50:99:[a-zA-Z0-9-_.]*$/', trim($timer)))
      exit('incorect Timer!');
}

function mediathek_util_make_safe($variable) {// DB connection is needed, deleted in php 7.00
    $variable = mysql_real_escape_string(trim($variable));
    return $variable;
}

function mediathek_util_checkOneWord($str){// check if has spaces
    if(strpos( trim($str),' ')!== FALSE)
      exit('incorect format for String!');
}

function mediathek_util_checkssh($str){//check if a string has ssh and ip addess in it
    if(preg_match('/^[a-z0-9-_. ]*ssh[a-zA-Z0-9-_.@ ]*[0-9]+.[0-9]+.[0-9]+.[0-9]+[a-z0-9-_. ]*$/',strtolower(trim($str))))
      exit('Contains ssh command!');
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        

function mediathek_util_check_string($str){// check for words to be made fo letters, digits, - ,_ and . .
    if(!preg_match('/^[a-zA-Z0-9-_.]*$/', trim($str)))
      exit('incorect format for String!');
}

function mediathek_util_check_number($number){
    if(!is_numeric($number)){
        //return false;
        exit('Not a number parameter for mysql query!!!');
    }
    return true;
}

 
?>