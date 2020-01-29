<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
class Calc{
    public $num1;
    public $num2;
    public $cal;
    
    public function _construct($num1, $num2, $cal){
        $this->num1=$num1;
        $this->num2=$num2;
        $this->cal=$cal;
               
    }
    public function calcMethot(){
        switch ($this->cal) {
            case 'add':
                 $result = $this->num1 + $this->num2;
                break;
            case 'sub':
                $result = $this->num1 - $this->num2;
                break;
            case 'mul':
                $result = $this->num1 * $this->num2;
                break;

            default:
                $result = "Error";
                
                break;
        }
        return $result;
    }
}

