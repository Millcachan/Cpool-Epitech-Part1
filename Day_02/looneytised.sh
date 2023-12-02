#!/bin/bash
sed -e "s/arnaudi1/Porky Pig/" -e "s/theo1/Wile E. Coyote/" -e "s/steven1/Daffy Duck/" -e "s/pierre_jean/Marvin the Martian/" | grep -e "Wile E. Coyote" -e "Daffy Duck" -e "Porky Pig" -e "Marvin the Martian"
