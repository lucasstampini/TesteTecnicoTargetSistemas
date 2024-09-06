// Importa o arquivo JSON usando require
const faturamentoMensal = require('./dados.json');

// Filtra os dias com faturamento maior que 0
const diasComFaturamento = faturamentoMensal.filter(dia => dia.valor > 0);

// Encontra o menor e maior valor de faturamento, .map cria um novo array com os valores de faturamento de cada dia e o operador spread
//"..." expande o array em uma lista de argumentos separados.
const menorValor = Math.min(...diasComFaturamento.map(dia => dia.valor)); 
const maiorValor = Math.max(...diasComFaturamento.map(dia => dia.valor));

// Calcula a média mensal de faturamento (excluindo dias sem faturamento)
const somaFaturamento = diasComFaturamento.reduce((acc, dia) => acc + dia.valor, 0);
const mediaMensal = somaFaturamento / diasComFaturamento.length;

// Conta o número de dias em que o faturamento foi superior à média mensal
const diasAcimaMedia = diasComFaturamento.filter(dia => dia.valor > mediaMensal).length;

// Exibe os resultados
console.log(`Menor valor de faturamento: ${menorValor.toFixed(2)}`);
console.log(`Maior valor de faturamento: ${maiorValor.toFixed(2)}`);
console.log(`Número de dias com faturamento acima da média mensal: ${diasAcimaMedia}`);
