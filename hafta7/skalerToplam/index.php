<?php
include("readCSV.php");
 
//unset($rows[0]); // title elamanları diziden silindi

function skaler($file){
    $rows = readCSV($file);

    $sonuc = 0;
    foreach($rows as $key => $row){ 
        if($key==0) continue;

        $x= $row[0];
        $y= $row[1];

        $sonuc = $sonuc+($x*$y);  

    }

    return $sonuc;

} 

$sonuc = skaler("file.csv");
echo $sonuc;

 


