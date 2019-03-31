--EN CASO QUE TENGAMOS COEFICIENTE DE ROZAMIENTO
data Ace = Ace Float Float Float
Acc :: Float -> Float
Acc ( Ace Fuerza Masa Rozamiento ) = ( Fuerza / Masa ) - ( Rozamiento * 10 )

--EN CASO QUE TENGAMOS LA ACELERACION
data velFinal = velFinal Float Float Float
Vel :: velFinal -> Float
Vel ( velFinal VelInicial Distancia Aceleracion ) = ( VelInicial * VelInicial + 2 * Aceleracion * Distancia )
  
data MRU = MRU Float Float Float Float
Tiempo :: MRU -> Float
Tiempo ( MRU Vf Vo D a ) = (( Vf - Vo ) / a )

