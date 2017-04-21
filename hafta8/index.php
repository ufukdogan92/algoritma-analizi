<style>
    
    div{
        padding: 3px;
    }
</style>

<?php  
 
function enKucuk($data) {
    $min = $data[0];
    foreach($data as $eleman) { 
        if($eleman<$min)
            $min = $eleman;
     }  
     return $min;
} 

function enBuyuk($data) {
    $max = $data[0];
    foreach ($data as $eleman) { 
        if($eleman>$max)
            $max = $eleman;
     } 

     return $max;
} 



function ortalama($data) {
    $deger=0;
    foreach ($data as $eleman) { 
        $deger = $deger + $eleman;
     } 

     return $deger/count($data);
} 


function standarSapma($data) {
    $ortalama = ortalama($data);
    $toplam = 0;

    foreach ($data as $eleman) { 
        $toplam = $toplam + pow($ortalama-$eleman,2);
     } 

     return sqrt($toplam/(count($data)-1));
} 

function varyans($data) {
   return pow(standarSapma($data),2);
} 


function dagilim($data,$x) {
   $carpan = 1/sqrt(2*3.14*pow(standarSapma($data),2));
   return $carpan*exp(-1*(pow($x-ortalama($data),2)/(2*pow(standarSapma($data),2))));
} 





$dizi = array(1,2,3,4,5,6,7,8,9,10); 

echo "<div> Dizi: ";

foreach ($dizi as $eleman) {
    echo $eleman." ";
}

echo "</div>";

echo "<div> En küçük eleman: ".enKucuk($dizi)."</div>";

echo "<div> En büyük eleman: ".enBuyuk($dizi)."</div>";

echo "<div> Ortalama: ".ortalama($dizi)."</div>";

echo "<div> Standart Sapma: ".standarSapma($dizi)."</div>";

echo "<div> Varyans: ".varyans($dizi)."</div>";



foreach ($dizi as $key) {
    echo("<div>$key degeri icin : ".dagilim($dizi,$key)." </div>");
} 