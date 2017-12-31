<?php
$rangeIndex = 1;
$searchText = $_GET["searchText"];
$callback	= "";

if(isset($_GET["callback"])){
    $callback = $_GET["callback"];
}else{
    $callback = "";
}

if(isset($_GET["startIndex"])){
    $rangeIndex  = intval($_GET["startIndex"]);
}

$splitRange = json_decode($_GET["splitrange"]);
$hits       = array();

foreach ($splitRange as &$value) {
    if($value >= $rangeIndex){
        $fileData = file_get_contents('docs/section_'. $value . '.html');
        if(stripos($fileData,$searchText)){
            array_push($hits,$value);
        }
    }
}

$result = (object)array('hits' => $hits);
echo json_encode($result);
?>