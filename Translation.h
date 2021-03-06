/*----------------------------------------------------------------------------------------------------
  Project Name : Solar Powered WiFi Weather Station V2.32
  Features: temperature, dewpoint, dewpoint spread, heat index, humidity, absolute pressure, relative pressure, battery status and
  the famous Zambretti Forecaster (multi lingual)
  Authors: Keith Hungerford, Debasish Dutta and Marc Stähli
  Website : www.opengreenenergy.com
  
******* Transaltion tables ****************************************/

#if LANGUAGE == 'EN'
  const char TEXT_AIR_PRESSURE[]      = "Pressure";
  const char TEXT_RISING_FAST[]       = "rising fast";
  const char TEXT_RISING[]            = "rising";
  const char TEXT_RISING_SLOW[]       = "rising slow";
  const char TEXT_STEADY[]            = "steady";
  const char TEXT_FALLING_SLOW[]      = "falling slow";
  const char TEXT_FALLING[]           = "falling";
  const char TEXT_FALLING_FAST[]      = "falling fast";
  
  const char TEXT_ZAMBRETTI_FORECAST[]= "Forecast";
  const char TEXT_ZAMBRETTI_ACCURACY[]= "Prediction accuracy";
  const char TEXT_ZAMBRETTI_A[]       = "Settled Fine Weather";
  const char TEXT_ZAMBRETTI_B[]       = "Fine Weather";
  const char TEXT_ZAMBRETTI_C[]       = "Becoming Fine";
  const char TEXT_ZAMBRETTI_D[]       = "Fine, Becoming Less Settled";
  const char TEXT_ZAMBRETTI_E[]       = "Fine, Possibly showers";
  const char TEXT_ZAMBRETTI_F[]       = "Fairly Fine, Improving";
  const char TEXT_ZAMBRETTI_G[]       = "Fairly Fine, Possibly showers early";
  const char TEXT_ZAMBRETTI_H[]       = "Fairly Fine, Showers Later";
  const char TEXT_ZAMBRETTI_I[]       = "Showery Early, Improving";
  const char TEXT_ZAMBRETTI_J[]       = "Changeable Improving";
  const char TEXT_ZAMBRETTI_K[]       = "Fairly Fine, Showers likely";
  const char TEXT_ZAMBRETTI_L[]       = "Rather Unsettled Clearing Later";
  const char TEXT_ZAMBRETTI_M[]       = "Unsettled, Probably Improving";
  const char TEXT_ZAMBRETTI_N[]       = "Showery Bright Intervals";
  const char TEXT_ZAMBRETTI_O[]       = "Showery Becoming Unsettled";
  const char TEXT_ZAMBRETTI_P[]       = "Changeable some rain";
  const char TEXT_ZAMBRETTI_Q[]       = "Unsettled, short fine Intervals";
  const char TEXT_ZAMBRETTI_R[]       = "Unsettled, Rain later";
  const char TEXT_ZAMBRETTI_S[]       = "Unsettled, rain at times";
  const char TEXT_ZAMBRETTI_T[]       = "Very Unsettled, Finer at times";
  const char TEXT_ZAMBRETTI_U[]       = "Rain at times, Worse later";
  const char TEXT_ZAMBRETTI_V[]       = "Rain at times, becoming very unsettled";
  const char TEXT_ZAMBRETTI_W[]       = "Rain at Frequent Intervals";
  const char TEXT_ZAMBRETTI_X[]       = "Very Unsettled, Rain";
  const char TEXT_ZAMBRETTI_Y[]       = "Stormy, possibly improving";
  const char TEXT_ZAMBRETTI_Z[]       = "Stormy, much rain";
  const char TEXT_ZAMBRETTI_0[]       = "Battery empty, please recharge!";
  const char TEXT_ZAMBRETTI_DEFAULT[] = "Sorry, no forecast for the moment";

#elif LANGUAGE == 'DE'
  const char TEXT_AIR_PRESSURE[]      = "Luftdruck";
  const char TEXT_RISING_FAST[]       = "rasch steigend";
  const char TEXT_RISING[]            = "steigend";
  const char TEXT_RISING_SLOW[]       = "langsam steigend";
  const char TEXT_STEADY[]            = "beständig";
  const char TEXT_FALLING_SLOW[]      = "langsam fallend";
  const char TEXT_FALLING[]           = "fallend";
  const char TEXT_FALLING_FAST[]      = "rasch fallend";
  
  const char TEXT_ZAMBRETTI_FORECAST[]= "Wettervorhersage";
  const char TEXT_ZAMBRETTI_ACCURACY[]= "Vorhersagegenauigkeit";
  const char TEXT_ZAMBRETTI_A[]       = "Beständiges Schönwetter";
  const char TEXT_ZAMBRETTI_B[]       = "Schönes Wetter";
  const char TEXT_ZAMBRETTI_C[]       = "Wetter wird gut";
  const char TEXT_ZAMBRETTI_D[]       = "Schön, wird wechselhaft";
  const char TEXT_ZAMBRETTI_E[]       = "Schön, Regenschauer möglich";
  const char TEXT_ZAMBRETTI_F[]       = "Ziemlich gut, verbessert sich";
  const char TEXT_ZAMBRETTI_G[]       = "Ziemlich gut, frühe Regenschauer möglich";
  const char TEXT_ZAMBRETTI_H[]       = "Ziemlich gut, spätere Regenschauer";
  const char TEXT_ZAMBRETTI_I[]       = "Früh schauerhaft, verbessert sich";
  const char TEXT_ZAMBRETTI_J[]       = "Wechselhaft, verbessert sich";
  const char TEXT_ZAMBRETTI_K[]       = "Ziemlich gut, Regenschauer möglich";
  const char TEXT_ZAMBRETTI_L[]       = "Eher veränderlich, klart später auf";
  const char TEXT_ZAMBRETTI_M[]       = "Veränderlich, verbessert sich wahrscheinlich";
  const char TEXT_ZAMBRETTI_N[]       = "Regnerisch mit Aufhellungen";
  const char TEXT_ZAMBRETTI_O[]       = "Regnerisch, wird veränderlich";
  const char TEXT_ZAMBRETTI_P[]       = "Veränderlich mit wenig Regen";
  const char TEXT_ZAMBRETTI_Q[]       = "Veränderlich, mit kurzen schönen Intervallen";
  const char TEXT_ZAMBRETTI_R[]       = "Veränderlich, später Regen";
  const char TEXT_ZAMBRETTI_S[]       = "Veränderlich, zeitweise Regen";
  const char TEXT_ZAMBRETTI_T[]       = "Stark wechselnd, zeitweise schöner";
  const char TEXT_ZAMBRETTI_U[]       = "Zeitweise Regen, verschlechtert sich";
  const char TEXT_ZAMBRETTI_V[]       = "Zeitweise Regen, wird sehr unruhig";
  const char TEXT_ZAMBRETTI_W[]       = "Regen in regelmässigen Abständen";
  const char TEXT_ZAMBRETTI_X[]       = "Sehr veränderlich, Regen";
  const char TEXT_ZAMBRETTI_Y[]       = "Stürmisch, verbessert sich wahrscheinlich";
  const char TEXT_ZAMBRETTI_Z[]       = "Stürmisch, viel Regen";
  const char TEXT_ZAMBRETTI_0[]       = "Batterie leer, bitte nachladen!";
  const char TEXT_ZAMBRETTI_DEFAULT[] = "Im Moment keine Prognose möglich";

#elif LANGUAGE == 'FR'
  const char TEXT_AIR_PRESSURE[]      = "Pression";
  const char TEXT_RISING_FAST[]       = "en hausse rapide";
  const char TEXT_RISING[]            = "en hausse";
  const char TEXT_RISING_SLOW[]       = "en faible hausse";
  const char TEXT_STEADY[]            = "constante";
  const char TEXT_FALLING_SLOW[]      = "en faible baisse";
  const char TEXT_FALLING[]           = "en baisse";
  const char TEXT_FALLING_FAST[]      = "en baisse rapide";
  
  const char TEXT_ZAMBRETTI_FORECAST[]= "Prévisions";
  const char TEXT_ZAMBRETTI_ACCURACY[]= "Précision des prévisions";
  const char TEXT_ZAMBRETTI_A[]       = "Beau temps installé";
  const char TEXT_ZAMBRETTI_B[]       = "Beau temps";
  const char TEXT_ZAMBRETTI_C[]       = "Amélioration de la météo";
  const char TEXT_ZAMBRETTI_D[]       = "Beau temps, deviens changeant";
  const char TEXT_ZAMBRETTI_E[]       = "Beau temps, Possibilité d'averses";
  const char TEXT_ZAMBRETTI_F[]       = "Assez bon, en amélioration";
  const char TEXT_ZAMBRETTI_G[]       = "Assez bon, des averses précoces sont possibles";
  const char TEXT_ZAMBRETTI_H[]       = "Assez bon, des averses plus tard";
  const char TEXT_ZAMBRETTI_I[]       = "Pluie précoce, amélioration";
  const char TEXT_ZAMBRETTI_J[]       = "Changeant s'améliore";
  const char TEXT_ZAMBRETTI_K[]       = "Assez bon, averses probables";
  const char TEXT_ZAMBRETTI_L[]       = "Plutôt variable, s'éclaircira plus tard";
  const char TEXT_ZAMBRETTI_M[]       = "Instable, probablement en amélioration";
  const char TEXT_ZAMBRETTI_N[]       = "Pluie avec éclaircissement";
  const char TEXT_ZAMBRETTI_O[]       = "Pluvieux, devient instable";
  const char TEXT_ZAMBRETTI_P[]       = "Variable avec peu d'averses";
  const char TEXT_ZAMBRETTI_Q[]       = "Instable, avec quelques intervalles de beau";
  const char TEXT_ZAMBRETTI_R[]       = "Instable, averses plus tard";
  const char TEXT_ZAMBRETTI_S[]       = "Instable, averses occasionnelles";
  const char TEXT_ZAMBRETTI_T[]       = "Très Instable, parfois plus beau";
  const char TEXT_ZAMBRETTI_U[]       = "Averses par moments, plus mauvais plus tard";
  const char TEXT_ZAMBRETTI_V[]       = "Averses par moments, devient très instable";
  const char TEXT_ZAMBRETTI_W[]       = "Averses à intervalles fréquents";
  const char TEXT_ZAMBRETTI_X[]       = "Très instable, Pluie";
  const char TEXT_ZAMBRETTI_Y[]       = "Orageux, possible amélioration";
  const char TEXT_ZAMBRETTI_Z[]       = "Orageux, beaucoup de pluie";
  const char TEXT_ZAMBRETTI_0[]       = "Batterie vide, veuillez recharger!";
  const char TEXT_ZAMBRETTI_DEFAULT[] = "Désolé, aucune prévision possible pour le moment";

#elif LANGUAGE == 'IT'
  const char TEXT_AIR_PRESSURE[]      = "Pressione atmosferica";
  const char TEXT_RISING_FAST[]       = "in rapido aumento";
  const char TEXT_RISING[]            = "in aumento";
  const char TEXT_RISING_SLOW[]       = "in lento aumento";
  const char TEXT_STEADY[]            = "stabile";
  const char TEXT_FALLING_SLOW[]      = "in lenta discesa";
  const char TEXT_FALLING[]           = "in discesa";
  const char TEXT_FALLING_FAST[]      = "in rapida discesa";

  const char TEXT_ZAMBRETTI_FORECAST[]= "Previsioni meteo";
  const char TEXT_ZAMBRETTI_ACCURACY[]= "Precisione";
  const char TEXT_ZAMBRETTI_A[]       = "Bel tempo stabile";
  const char TEXT_ZAMBRETTI_B[]       = "Bel tempo";
  const char TEXT_ZAMBRETTI_C[]       = "In miglioramento";
  const char TEXT_ZAMBRETTI_D[]       = "Bel tempo con possibile peggioramento";
  const char TEXT_ZAMBRETTI_E[]       = "Bel tempo con possibili rovesci";
  const char TEXT_ZAMBRETTI_F[]       = "Tempo abbastanza buono, in miglioramento";
  const char TEXT_ZAMBRETTI_G[]       = "Tempo abbastanza buono ma con possibili piogge a breve";
  const char TEXT_ZAMBRETTI_H[]       = "Tempo abbastanza buono ma con piogge a breve";
  const char TEXT_ZAMBRETTI_I[]       = "Piogge a breve ma in miglioramento";
  const char TEXT_ZAMBRETTI_J[]       = "Variabile";
  const char TEXT_ZAMBRETTI_K[]       = "Tempo abbastanza buono con probabili piogge";
  const char TEXT_ZAMBRETTI_L[]       = "Tempo incerto con schiarite a breve";
  const char TEXT_ZAMBRETTI_M[]       = "Tempo incerto con probabili miglioramenti";
  const char TEXT_ZAMBRETTI_N[]       = "Piovoso con schiarite ad intervalli";
  const char TEXT_ZAMBRETTI_O[]       = "Uggioso ed incerto";
  const char TEXT_ZAMBRETTI_P[]       = "Variabile con rovesci di piogge";
  const char TEXT_ZAMBRETTI_Q[]       = "Incerto con brevi intervalli di bel tempo";
  const char TEXT_ZAMBRETTI_R[]       = "Incerto con possibili rovesci a breve";
  const char TEXT_ZAMBRETTI_S[]       = "Incerto con piaggia a tratti";
  const char TEXT_ZAMBRETTI_T[]       = "Molto incerto con sprazzi di bel tempo";
  const char TEXT_ZAMBRETTI_U[]       = "Pioggia a tratti in peggioramento";
  const char TEXT_ZAMBRETTI_V[]       = "Pioggia a tratti con forte instabilità";
  const char TEXT_ZAMBRETTI_W[]       = "Pioggia a intervalli frequenti";
  const char TEXT_ZAMBRETTI_X[]       = "Molto instabile, Pioggia";
  const char TEXT_ZAMBRETTI_Y[]       = "Tempestoso con possibili miglioramenti";
  const char TEXT_ZAMBRETTI_Z[]       = "Tempestoso e moto piovoso";
  const char TEXT_ZAMBRETTI_0[]       = "Batteria scarica, si prega di ricaricare!";
  const char TEXT_ZAMBRETTI_DEFAULT[] = "Mi dispiace, nessuna previsione disponibile al momento";

#elif LANGUAGE == 'PL'
  const char TEXT_AIR_PRESSURE[]      = "Ciśnienie";
  const char TEXT_RISING_FAST[]       = "szybko rośnie";
  const char TEXT_RISING[]            = "rośnie";
  const char TEXT_RISING_SLOW[]       = "powoli rośnie";
  const char TEXT_STEADY[]            = "stałe";
  const char TEXT_FALLING_SLOW[]      = "powoli spada";
  const char TEXT_FALLING[]           = "spada";
  const char TEXT_FALLING_FAST[]      = "szybko spada";

  const char TEXT_ZAMBRETTI_FORECAST[]= "Prognoza";
  const char TEXT_ZAMBRETTI_ACCURACY[]= "Dokładność";
  const char TEXT_ZAMBRETTI_A[]       = "Dobra pogoda, stabilna";
  const char TEXT_ZAMBRETTI_B[]       = "Dobra pogoda";
  const char TEXT_ZAMBRETTI_C[]       = "Poprawia się";
  const char TEXT_ZAMBRETTI_D[]       = "Dobra, pogarsza się";
  const char TEXT_ZAMBRETTI_E[]       = "Dobra, możliwy deszcz";
  const char TEXT_ZAMBRETTI_F[]       = "Całkiem dobra, polepsza się";
  const char TEXT_ZAMBRETTI_G[]       = "Całkiem dobra, wkrótce możliwe deszcze";
  const char TEXT_ZAMBRETTI_H[]       = "Całkiem dobra, później deszcze";
  const char TEXT_ZAMBRETTI_I[]       = "Wkrótce deszczowo, polepsza się";
  const char TEXT_ZAMBRETTI_J[]       = "Zmienna, polepsza się";
  const char TEXT_ZAMBRETTI_K[]       = "Całkiem dobra, możliwe deszcze";
  const char TEXT_ZAMBRETTI_L[]       = "Raczej niepewna, później rozpogodzi się";
  const char TEXT_ZAMBRETTI_M[]       = "Niepewna, możliwe rozpogodzenia";
  const char TEXT_ZAMBRETTI_N[]       = "Deszcze z przejaśnieniami";
  const char TEXT_ZAMBRETTI_O[]       = "Deszczowo, staje się niepewna";
  const char TEXT_ZAMBRETTI_P[]       = "Zmienna, niewielkie opady";
  const char TEXT_ZAMBRETTI_Q[]       = "Niepewna, krótkie przejaśnienia";
  const char TEXT_ZAMBRETTI_R[]       = "Niepewna, później deszcz";
  const char TEXT_ZAMBRETTI_S[]       = "Niepewna, okresowe opady";
  const char TEXT_ZAMBRETTI_T[]       = "Bardzo niepewna, z przejaśnieniami";
  const char TEXT_ZAMBRETTI_U[]       = "Okresowe opady, później się pogorszy";
  const char TEXT_ZAMBRETTI_V[]       = "Okresowe opady, staje się bardzo niepewna";
  const char TEXT_ZAMBRETTI_W[]       = "Częste opady";
  const char TEXT_ZAMBRETTI_X[]       = "Bardzo niepewna, deszcz";
  const char TEXT_ZAMBRETTI_Y[]       = "Burzowa, możliwe polepszenie";
  const char TEXT_ZAMBRETTI_Z[]       = "Burzowa, duże opady deszczu";
  const char TEXT_ZAMBRETTI_0[]       = "Bateria rozładowana, proszę naładować!";
  const char TEXT_ZAMBRETTI_DEFAULT[] = "Obecnie brak prognozy";

#elif LANGUAGE == 'RO'
  const char TEXT_AIR_PRESSURE[]      = "Presiune";
  const char TEXT_RISING_FAST[]       = "crestere rapida";
  const char TEXT_RISING[]            = "crestere";
  const char TEXT_RISING_SLOW[]       = "crestere usoara";
  const char TEXT_STEADY[]            = "stabila";
  const char TEXT_FALLING_SLOW[]      = "scadere usoara";
  const char TEXT_FALLING[]           = "scadere";
  const char TEXT_FALLING_FAST[]      = "scadere rapida";
  
  const char TEXT_ZAMBRETTI_FORECAST[]= "Prognoza";
  const char TEXT_ZAMBRETTI_ACCURACY[]= "Acuratetea prognozei";
  const char TEXT_ZAMBRETTI_A[]       = "Stabil Vreme buna";
  const char TEXT_ZAMBRETTI_B[]       = "Vreme buna";
  const char TEXT_ZAMBRETTI_C[]       = "Devine buna";
  const char TEXT_ZAMBRETTI_D[]       = "Buna, devine instabila";
  const char TEXT_ZAMBRETTI_E[]       = "Buna, posibile averse";
  const char TEXT_ZAMBRETTI_F[]       = "Destul de buna, Se imbunatateste";
  const char TEXT_ZAMBRETTI_G[]       = "Destul de buna, Posibile averse in curand";
  const char TEXT_ZAMBRETTI_H[]       = "Destul de buna, Posibile averse mai tarziu";
  const char TEXT_ZAMBRETTI_I[]       = "Averse in curand, Se imbunatateste";
  const char TEXT_ZAMBRETTI_J[]       = "Schimbatoare Se imbunatateste";
  const char TEXT_ZAMBRETTI_K[]       = "Destul de buna, Posibile averse";
  const char TEXT_ZAMBRETTI_L[]       = "Mai degraba Instabil, se imbunatateste mai tarziu";
  const char TEXT_ZAMBRETTI_M[]       = "Instabil, Probabil se imbunateste";
  const char TEXT_ZAMBRETTI_N[]       = "Averse cu intervale senine";
  const char TEXT_ZAMBRETTI_O[]       = "Averse, devine instabil";
  const char TEXT_ZAMBRETTI_P[]       = "Schimbatoare ceva averse";
  const char TEXT_ZAMBRETTI_Q[]       = "Instabil, scurte intervale mici";
  const char TEXT_ZAMBRETTI_R[]       = "Instabil, Averse mai tarziu";
  const char TEXT_ZAMBRETTI_S[]       = "Instabil, Averse uneori";
  const char TEXT_ZAMBRETTI_T[]       = "Foarte instabil, intervale mici uneori";
  const char TEXT_ZAMBRETTI_U[]       = "Ploaie uneori, mai tarziu se inrautateste";
  const char TEXT_ZAMBRETTI_V[]       = "Ploaie uneori, devine foarte instabil";
  const char TEXT_ZAMBRETTI_W[]       = "Ploaie la intervale frecvente";
  const char TEXT_ZAMBRETTI_X[]       = "Foarte instabil, ploaie";
  const char TEXT_ZAMBRETTI_Y[]       = "Furtuna, Posibil se imbunatateste";
  const char TEXT_ZAMBRETTI_Z[]       = "Furtuna, multa ploaie";
  const char TEXT_ZAMBRETTI_0[]       = "Baterie descarcata, te rog reincarca!";
  const char TEXT_ZAMBRETTI_DEFAULT[] = "Imi pare rau, nici o prognoza momentan";

#elif LANGUAGE == 'SP'
  const char TEXT_AIR_PRESSURE[]      = "Presión";
  const char TEXT_RISING_FAST[]       = "en rápido aumento";
  const char TEXT_RISING[]            = "en aumento";
  const char TEXT_RISING_SLOW[]       = "en aumento lento";
  const char TEXT_STEADY[]            = "estable";
  const char TEXT_FALLING_SLOW[]      = "en lento descenso";
  const char TEXT_FALLING[]           = "en descenso";
  const char TEXT_FALLING_FAST[]      = "en rápido descenso";

  const char TEXT_ZAMBRETTI_FORECAST[]= "Pronóstico";
  const char TEXT_ZAMBRETTI_ACCURACY[]= "Precisión de pronóstico";
  const char TEXT_ZAMBRETTI_A[]       = "Clima estable";
  const char TEXT_ZAMBRETTI_B[]       = "Buen clima";
  const char TEXT_ZAMBRETTI_C[]       = "Mejorando";
  const char TEXT_ZAMBRETTI_D[]       = "Buen clima, pero inestable";
  const char TEXT_ZAMBRETTI_E[]       = "Buen clima con posibles lluvias";
  const char TEXT_ZAMBRETTI_F[]       = "Muy buen clima, mejorando";
  const char TEXT_ZAMBRETTI_G[]       = "Buen clima pero con posibles lloviznas";
  const char TEXT_ZAMBRETTI_H[]       = "Buen clima pero con lloviznas";
  const char TEXT_ZAMBRETTI_I[]       = "Lloviznas pero mejorando";
  const char TEXT_ZAMBRETTI_J[]       = "Variable mejora";
  const char TEXT_ZAMBRETTI_K[]       = "Buen clima con probables lluvias";
  const char TEXT_ZAMBRETTI_L[]       = "Inestable, mejorando después ";
  const char TEXT_ZAMBRETTI_M[]       = "Clima inestable con probables mejoras";
  const char TEXT_ZAMBRETTI_N[]       = "Lluvioso con intervalos";
  const char TEXT_ZAMBRETTI_O[]       = "Lluvioso, se vuelve inestable";
  const char TEXT_ZAMBRETTI_P[]       = "Variable con chubascos";
  const char TEXT_ZAMBRETTI_Q[]       = "Inestable con intervalos cortos de buen tiempo";
  const char TEXT_ZAMBRETTI_R[]       = "Inestable, luego lluvia";
  const char TEXT_ZAMBRETTI_S[]       = "Inestable, lluvia ocasionales";
  const char TEXT_ZAMBRETTI_T[]       = "Muy inestable, pequeños intervalos a veces";
  const char TEXT_ZAMBRETTI_U[]       = "Llueve a veces, luego empeora";
  const char TEXT_ZAMBRETTI_V[]       = "Lluvia ocasional con fuerte inestabilidad";
  const char TEXT_ZAMBRETTI_W[]       = "Precipitaciones frecuentes";
  const char TEXT_ZAMBRETTI_X[]       = "Muy inestable, lluvia";
  const char TEXT_ZAMBRETTI_Y[]       = "Tormenta con posibles mejoras";
  const char TEXT_ZAMBRETTI_Z[]       = "Tormenta, mucha lluvia";
  const char TEXT_ZAMBRETTI_0[]       = "¡Batería baja, por favor recargue!";
  const char TEXT_ZAMBRETTI_DEFAULT[] = "Sin pronóstico por el momento";
  
#elif LANGUAGE == 'TR'
  const char TEXT_AIR_PRESSURE[]      = "Basınç";
  const char TEXT_RISING_FAST[]       = "hızla artıyor";
  const char TEXT_RISING[]            = "artıyor";
  const char TEXT_RISING_SLOW[]       = "yavaş yavaş artıyor";
  const char TEXT_STEADY[]            = "kararlı";
  const char TEXT_FALLING_SLOW[]      = "yavaş yavaş azalıyor";
  const char TEXT_FALLING[]           = "azalıyor";
  const char TEXT_FALLING_FAST[]      = "hızla azalıyor";
  
  const char TEXT_ZAMBRETTI_FORECAST[]= "Tahmin";
  const char TEXT_ZAMBRETTI_ACCURACY[]= "Tahmin doğruluğu";
  const char TEXT_ZAMBRETTI_A[]       = "Stabil Güzel Hava";
  const char TEXT_ZAMBRETTI_B[]       = "Güzel Hava";
  const char TEXT_ZAMBRETTI_C[]       = "İyileşen Hava";
  const char TEXT_ZAMBRETTI_D[]       = "Güzel, ancak kararsız";
  const char TEXT_ZAMBRETTI_E[]       = "Yağmurlu ve güzel hava";
  const char TEXT_ZAMBRETTI_F[]       = "Çok iyi hava, gelişiyor";
  const char TEXT_ZAMBRETTI_G[]       = "Güzel hava, ancak sağanak yağışlı";
  const char TEXT_ZAMBRETTI_H[]       = "Hava iyi, ancak çiseliyor";
  const char TEXT_ZAMBRETTI_I[]       = "Çiseliyor ama düzeliyor";
  const char TEXT_ZAMBRETTI_J[]       = "Değişken iyileşme";
  const char TEXT_ZAMBRETTI_K[]       = "Muhtemel yağışlı, güzel hava";
  const char TEXT_ZAMBRETTI_L[]       = "Kararsız, gelişiyor";
  const char TEXT_ZAMBRETTI_M[]       = "Olası iyileştirmelerle kararsız hava";
  const char TEXT_ZAMBRETTI_N[]       = "Aralıklarla yağmurlu";
  const char TEXT_ZAMBRETTI_O[]       = "Yağmurlu, kararsız";
  const char TEXT_ZAMBRETTI_P[]       = "Sağanak Yağmur";
  const char TEXT_ZAMBRETTI_Q[]       = "Kısa süreli iyi hava, kararsız";
  const char TEXT_ZAMBRETTI_R[]       = "Kararsız, sonrasında yağmurlu";
  const char TEXT_ZAMBRETTI_S[]       = "Kararsız, zaman zaman yağmurlu";
  const char TEXT_ZAMBRETTI_T[]       = "Çok kararsız, sonrasında iyileşiyor";
  const char TEXT_ZAMBRETTI_U[]       = "Yağmur ithimali, sonrasında kötüleşiyor";
  const char TEXT_ZAMBRETTI_V[]       = "Aralıklı yağmur, çok kararsız";
  const char TEXT_ZAMBRETTI_W[]       = "Sık Aralıklı Yağmur";
  const char TEXT_ZAMBRETTI_X[]       = "Çok kararsız, yağmurlu";
  const char TEXT_ZAMBRETTI_Y[]       = "Fırtınalı, muhtemelen gelişiyor";
  const char TEXT_ZAMBRETTI_Z[]       = "Fırtınalı, çok yağmurlu";
  const char TEXT_ZAMBRETTI_0[]       = "Pil boş, lütfen şarj edin!";
  const char TEXT_ZAMBRETTI_DEFAULT[] = "Üzgünüz, şu an için tahmin yok";

#endif
