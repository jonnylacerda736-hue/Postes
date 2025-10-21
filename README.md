# Projeto Arduino – Controle de LEDs com LDR

## 🎯 Objetivo
Este projeto tem como objetivo demonstrar o uso de um **sensor LDR (Light Dependent Resistor)** para controlar o acendimento gradual de **quatro LEDs** conforme a luminosidade do ambiente diminui.

---

## ⚙️ Funcionamento
O sensor **LDR** detecta a intensidade da luz ambiente.  
O valor lido varia de **0 a 1023**:
- Valores **altos** → ambiente **claro**  
- Valores **baixos** → ambiente **escuro**

Conforme a luz diminui, mais LEDs são acesos:
| Luminosidade | Valor LDR (aprox.) | LEDs Acesos |
|---------------|--------------------|--------------|
| Muito claro   | > 580              | Nenhum       |
| Pouco escuro  | < 580              | LED 1        |
| Escuro        | < 512              | LED 1, LED 2 |
| Muito escuro  | < 342              | LED 1, LED 2, LED 3 |
| Escuridão total | < 200            | Todos (LED 1–4) |

---

## 🧠 Componentes Utilizados
- 1 × Arduino UNO  
- 1 × Sensor LDR  
- 4 × LEDs (vermelhos, amarelos, ou da sua escolha)  
- 4 × Resistores (220 Ω ou 330 Ω para os LEDs)  
- 1 × Resistor (10 kΩ para o LDR)  
- 1 × Protoboard  
- Jumpers (macho-macho)

---

## 🔌 Ligações
| Componente | Pino Arduino |
|-------------|--------------|
| LDR         | A0           |
| LED 1       | 9            |
| LED 2       | 10           |
| LED 3       | 11           |
| LED 4       | 12           |
| GND         | Barramento negativo da protoboard |
| 5V          | Barramento positivo da protoboard |

---

## 💻 Código Fonte
O código completo está no arquivo principal do projeto (`ldr_leds.ino`).  
Ele lê o valor do LDR e acende os LEDs conforme os limites definidos.

---

## 🧩 Explicação do Código
1. Define os pinos dos LEDs e do LDR.  
2. Lê o valor do LDR via `analogRead(A0)`.  
3. Usa condicionais (`if`) para comparar o valor lido e acender os LEDs gradualmente.  
4. Utiliza `Serial.println()` para exibir o valor da luz no **Monitor Serial**.

---

## 🧪 Teste
1. Monte o circuito conforme o diagrama.  
2. Faça o upload do código no Arduino.  
3. Abra o **Monitor Serial** (Ctrl + Shift + M).  
4. Aproxime e afaste a mão ou uma lanterna do LDR e observe o comportamento dos LEDs.

---

## 🔍 Resultado Esperado
- Em ambiente **claro**, todos os LEDs permanecem **apagados**.  
- Conforme o ambiente **escurece**, os LEDs se acendem **progressivamente** até que todos fiquem acesos no **máximo de escuridão**.

---

## 🧑‍💻 Autor
Projeto desenvolvido para fins didáticos — controle de luminosidade com **Arduino UNO** e **LDR**.
