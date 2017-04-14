<?php 
function readCSV($csvFile){
    $rows = array();
    if (($handle = fopen($csvFile, "r")) !== FALSE) {
        while (($data = fgetcsv($handle, 0, ",")) !== FALSE) { 
            $rows[] = $data;
        }
        fclose($handle);
    }
    return $rows;
}


function addCSV($assocDataArray, $fileName)
{
    if(isset($assocDataArray['0'])){
        $fp = fopen($fileName, 'w');
        fputcsv($fp,  $assocDataArray['0'] );
        foreach($assocDataArray AS $key => $values){
			if($key == 0)continue;
            fputcsv($fp, $values);
        }
        fclose($fp);
    }
}
 