<?php  
 
function mergesort($data) {
    
    if(count($data)>1) {
        
       
        $data_middle = round(count($data)/2, 0, PHP_ROUND_HALF_DOWN); 
        $data_part1 = mergesort(array_slice($data, 0, $data_middle));
        $data_part2 = mergesort(array_slice($data, $data_middle, count($data))); 
        $counter1 = $counter2 = 0; 
        for ($i=0; $i<count($data); $i++) { 
            if($counter1 == count($data_part1)) {
                $data[$i] = $data_part2[$counter2];
                ++$counter2; 
            } elseif (($counter2 == count($data_part2)) or ($data_part1[$counter1] < $data_part2[$counter2])) { 
                $data[$i] = $data_part1[$counter1];
                ++$counter1;
            } else {
                $data[$i] = $data_part2[$counter2];
                ++$counter2;
            }
        }
    }
    return $data;
} 


$dizi = array(8,4,1,9,5,7,3,2,6,0);
$yenidizi = mergesort($dizi);
 

echo "</div>";

foreach ($dizi as $eleman) {
    echo $eleman." ";
}

echo "</div>";


echo "<div>";

foreach ($yenidizi as $eleman) {
    echo $eleman." ";
}

echo "</div>";