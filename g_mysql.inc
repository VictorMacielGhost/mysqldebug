<?php

/*

    Include of MySQL Functions.
    @author Created By Victor Ghost (Github: VictorMacielGhost)
    Created At 03/30/22
    Edited last time at 04/09/22
    Do not remove credits!

    function debug_last_query($vquery, $vconnectionid); // Check the last query with the query string. This Funtion return's the error code
    
    function debug_str_query($vconnectionid); // This Function shows the last MySQL error with one string. This Function don't return any specific value
    
    function debug_mysql_query($vquery, $vconnectionid); // This Function Send One query to one mysql server and result the error code automatic. This Function don't return any specific value 

*/

    print("\n<!-- v_mysql v0.3 by Victor Ghost Loaded Sucessfully! -->\n");

    function debug_last_query($vquery, $vconnectionid)
    {
        $verro = mysqli_errno($vconnectionid);
        if(!$verro) print("\n<!-- The query \"$vquery\" Don't Resulted any MySQL Error. -->\n");
        else printf("\n<!-- The query \"$vquery\" Resulted in MySQL error %d. -->\n", $verro);

        return $verro;
    }

    function debug_str_query($vconnectionid)
    {
        $verror = mysqli_error($vconnectionid);
        if(strcmp(" ", $verror)) print("\n<!-- No Errors Occured -->\n");
        else printf("\n<!-- %s -->\n", $verror);
    }

    function debug_mysql_query($vquery, $vconnectionid)
    {
        mysqli_query($vconnectionid, $vquery);
        debug_last_query($vquery, $vconnectionid);
    }

?>