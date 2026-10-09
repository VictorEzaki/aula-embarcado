# Giroflex
 
Este projeto utiliza uma placa **arduino uno** para criar um giroflex
 
---
 
## Componentes Utilizados
 
* 1x Placa **arduino uno**
* 1x LED Vermelho
* 1x LED Azul
* 1x Buzzer 
* Resistores 
* Cabos de conexão
* Protoboard
 
---
 
## Esquema de Conexão (Pinout)
 
| Componente | Pino na BlackBoard | Tipo de Pino |
| :--- | :--- | :--- |
| **LED Azul** | Porta 5 | Digital (Saída) |
| **LED Vermelho** | Porta 6 | Digital (Saída) |
| **Buzzer** | Porta A0 | Analógico / Digital (Saída) |
 
---
 
## Como o Código Funciona
 
O código está dividido em duas partes principais:
 
1. **`setup()`**:
   * Configura as portas dos LEDs (`LED_AZUL` e `LED_VERMELHO`) e do buzzer (`PORTA_PIEZO`) como saídas (`OUTPUT`).
 
2. **`loop()`**:
   * **Fase 1**: chama método azul.
   * **Fase 2**: aplica um delay de 250 ms.
   * **Fase 3**: chama método vermelho.
   * **Fase 4**: aplica um delay de 250 ms.
   * O ciclo se repete de forma contínua.
  
3. **`azul()`**:
   * Desliga o led vermelho e liga o azul com `tone(PORTA_PIEZO, 1200);`
  
4. **`vermelho()`**:
   * Desliga o led azul e liga o vermelho com `tone(PORTA_PIEZO, 1400);`
 
---
 
## Como Executar o Projeto
 
1. Conecte a sua **Arduino uno** ao computador utilizando um cabo USB compatível.
2. Abra a **Arduino IDE**.
3. Monte o circuito na protoboard seguindo a tabela de conexões acima.
4. Copie o código fonte deste repositório e cole na Arduino IDE.
5. Selecione a placa correta em **Ferramentas > Placa** (como a BlackBoard é compatível com o Arduino Uno, selecione **Arduino Uno**) e escolha a porta COM correspondente em **Ferramentas > Porta**.
6. Clique no botão **Carregar** (seta para a direita) para enviar o código para a placa.
