# 🦆 MARRECO — BadUSB Open Source com Layout ABNT2

O **MARRECO** é um dispositivo **BadUSB open source** desenvolvido com **Arduino Pro Micro**, criado para fins **educacionais, acadêmicos e de conscientização em segurança ofensiva**.
Este projeto nasceu como meu Trabalho de Conclusão de Curso, com o objetivo de criar uma alternativa brasileira, acessível e adaptada ao **layout ABNT2**, para que profissionais e estudantes possam estudar ataques HID de maneira segura e ética.

---

## 📌 **Objetivos do Projeto**

* Disponibilizar um BadUSB **de baixo custo** e fácil construção.
* Fornecer uma implementação funcional e estável do **layout ABNT2**, evitando erros comuns em payloads escritos em português.
* Demonstrar **boas práticas éticas** no desenvolvimento e execução de payloads HID.
* Servir como base para **pesquisas, automações, testes de segurança e ensinamento de segurança ofensiva**.
* Criar uma plataforma extensível para estudos e criação de novos payloads.

---

## 🚀 **Recursos da Versão 1.0.0**

A release inicial do MARRECO traz:

### 🧩 **Camada de Tradução ABNT2 integrada**

Compatível com `KeyboardLayout_pt_BR`, corrigida e adaptada para que todos os caracteres brasileiros sejam enviados corretamente.

### 🧠 **Código-base organizado em módulos**

Sistema simples para criação de novos payloads, com estrutura clara e documentação comentada.

### 📚 **Payloads educacionais incluídos**

✔️ **Reverse Shell (DEMO)** — demonstração de automação de conexão reversa via terminal (não abre conexão real).
✔️ **Fork Bomb (DEMO)** — demonstração do impacto de execuções automáticas (somente para ambientes controlados).

Todos os exemplos são **exclusivamente para fins acadêmicos e laboratoriais**.

---

## 🔧 **Hardware Utilizado**

* **Arduino Pro Micro 5V/16MHz**
* Cabo USB
* Opcional: botão físico para acionar payload
* Opcional: encapsulamento estilo pendrive

O MARRECO utiliza a interface HID do microcontrolador **ATmega32U4**, permitindo que o dispositivo se identifique como um teclado no sistema operacional.

---

## 💻 **Como Utilizar**

1. Clone o repositório

   ```bash
   git clone https://github.com/Citeli-py/MARRECO
   ```
2. Abra o projeto no Arduino IDE ou PlatformIO.
3. Escolha um payload (ex.: `examples/reverse_shell`).
4. Compile e grave no Arduino Pro Micro.
5. Conecte o MARRECO em um computador de teste.
6. Opcional: pressione o botão (caso o payload utilize trigger físico).

---

## 📚 **Uso Acadêmico e de Conscientização**

O MARRECO pode ser utilizado em diversos contextos, como:

### 🎓 **Ensino**

* Demonstração de ataques HID
* Aulas de segurança ofensiva
* Laboratórios de CTF e pentest

### 🛡️ **Conscientização**

* Mostrar visualmente como BadUSBs funcionam
* Treinar equipes para reconhecer dispositivos maliciosos
* Simulações internas de segurança de endpoint

### 🔬 **Pesquisa e Desenvolvimento**

* Testes de conceitos em automação via HID
* Estudos sobre defesa contra BadUSB
* Desenvolvimento de ferramentas similares
* Criação de payloads customizados e scripts automáticos

### ⚙️ **Automação**

* Macros rápidas
* Atalhos personalizados
* Scripts de produtividade
  *(ex.: abrir terminal, executar comandos, abrir URLs etc.)*

---

## ⚠️ **Aviso de Segurança**

O MARRECO é **estritamente** para fins:

* Educacionais
* Acadêmicos
* De pesquisa
* De conscientização

❗ **Nunca utilize o MARRECO em máquinas que você não controla ou não possui autorização explícita.**
O uso inadequado pode violar leis e termos de uso, e **toda responsabilidade é do usuário**.

---

## 🤝 **Contribuições**

Contribuições são bem-vindas!
Abra uma issue, envie PRs ou sugira melhorias.
O objetivo do MARRECO é crescer com a comunidade e fomentar pesquisa em segurança no Brasil.

---

## 📄 **Licença**

Este projeto é distribuído sob a licença **MIT**.
Sinta-se livre para estudar, modificar e evoluir o MARRECO conforme necessário.
