# Dados coletados — Tarefa 07 (rascunho para o relatório)

Anotações brutas da coleta. O relatório final será escrito a partir delas.

## Local — Windows 10 (13/10/2026, ~18:15)

| Item | Valor |
|---|---|
| Hostname | DESKTOP-4LPM5DG |
| Tipo / plataforma | Windows_NT / win32 |
| Kernel | 10.0.19045 (Windows 10 Home) |
| Arquitetura / endianness | x64 / LE |
| CPU | Intel Core i5-8500 @ 3.00 GHz, 6 núcleos lógicos, 3000 MHz |
| Uso de CPU | 12,5 % a 23 % (por núcleo: 29,2 / 16,7 / 6,1 / 4,6 / 10,7 / 7,7 %) |
| Carga média | 0 / 0 / 0 — não suportada no Windows |
| Memória | 15,94 GB total; 9,84 GB usados (61,7 %); 6,10 GB livres |
| Limites cgroup | não se aplica |
| Uptime do SO | 1h 29min |
| Processos / threads | 257 processos, 4371 threads, 14,18 GB somados |
| Árvore da aplicação | node (2612) ← cmd (19328) ← node/npm (17112) ← powershell (20572) ← Code (18564) ← Code (20552) ← explorer (4228) |
| Fonte dos processos | WMI Win32_Process via PowerShell |
| Usuário | kayky; UID/GID e shell não existem no Windows |
| Home / temp | C:\Users\kayky / C:\Users\kayky\AppData\Local\Temp |
| Rede | IP 192.168.10.127 (Wi-Fi), 4 endereços (IPv4/IPv6 + loopback) |
| Ambiente | Local, "Processo no computador do usuário", porta 3000, NODE_ENV não definido |
| Container / hypervisor / kernel AWS | Não / Não / Não |
| Variáveis de ambiente | 78 no total; nenhuma de plataforma de nuvem |
| Arquivos do projeto | 17 (sem node_modules e .git) |
| Node.js | v22.23.2 (V8 12.4.254.21) |
| Processo Node | PID 2612 / PPID 19328; RSS 57,84 MB; heap 9,86/16,41 MB; CPU 1734 ms usuário / 796 ms sistema |

Observações:
- **WmiPrvSE com 14,6 % de CPU**: é o serviço do Windows que responde às consultas WMI que o próprio gerenciador de tarefas da aplicação faz a cada 3 s. Exemplo de "efeito do observador": medir o sistema consome recursos do sistema.
- No Windows, o `npm start` inicia o node através do `cmd` (node → cmd → node), diferente do Linux (node → npm).
- "System Idle Process" (PID 0) com 64,7 % = tempo ocioso da CPU.

## Vercel — serverless (13/10/2026, ~17:50)

| Item | Valor |
|---|---|
| URL | https://cloud-so-app.vercel.app |
| Plano | Hobby (gratuito) |
| Tempo de deploy | ~28 s (cronometrado, do clique até a tela de sucesso); build de 10–12 s no painel |
| Região | iad1 (Washington, EUA) / AWS_REGION us-east-1 |
| Modelo | Serverless (função sob demanda) |
| Hostname | 169.254.x.x — variou entre leituras (169.254.7.39 e 169.254.52.237) |
| Kernel | 5.10.255-268-309.1092.amzn2.x86_64 (Amazon Linux 2) |
| CPU | Intel Xeon, 2 núcleos, frequência não informada |
| Carga média | 0 / 0 / 0 |
| Memória | 2,23 GB total; ~200 MB usados (8,8–9,1 %) |
| Limites cgroup | nenhum visível |
| Uptime do SO | 0h 5min e 0h 8min (instâncias diferentes) |
| Processos | 3: init (PID 1, root), bootstrap (PID 2), node (PID 6) |
| Usuário | sbx_user1051, UID 993 / GID 990, shell /sbin/nologin |
| Rede | 169.254.100.6 na interface vint_runtime (link-local) |
| Container / hypervisor | Não / Sim |
| Variáveis | 48 no total; VERCEL=1, VERCEL_ENV=production, VERCEL_REGION=iad1, VERCEL_URL, VERCEL_GIT_COMMIT_SHA, AWS_REGION |
| Diretório | /var/task, 6 itens (.v8-cache, ___vc, index.js, package.json, processos.js, public) |
| Node.js | v22.23.2 em /var/lang/bin/node |
| Processo Node | PID 6 / PPID 2; RSS ~77 MB; heap ~10,6/11,9 MB |

Observações:
- A cada atualização da página (3 s), as leituras alternaram entre **duas instâncias** diferentes (hostname, uptime do SO e do processo diferentes) → várias microVMs atendendo em paralelo (escalabilidade horizontal).
- Prints vercel-01 a 04 refeitos às 18:27 com o deploy ea119ed: porta "não se aplica (serverless)" e kernel de nuvem AWS "Sim".
- Leitura das 18:27: hostname 169.254.25.129 (terceira instância diferente observada), **uptime do SO 0h 0m e processo com 42 s** → microVM recém-criada (cold start); CPU Intel Xeon @ 2.90 GHz; 3 processos / 17 threads / 71 MB; node PID 6 ← bootstrap PID 2.
- Painel (vercel-06-overview): 379 **Function Invocations** e 381 requisições de CDN nas últimas 6 h, 0 % de erros → cada atualização da página (a cada 3 s) é uma execução da função; os arquivos estáticos de public/ saem pela CDN.
- Aviso "Node.js Version Override" no painel: a versão do Node definida em "engines" no package.json (22.x) substituiu a configuração padrão do projeto na Vercel.
- Node na Vercel v22.23.2; no Render v22.23.3 → mesma versão principal, patch diferente (cada plataforma tem seu próprio build do runtime).

## Render — container (13/10/2026, ~18:19)

| Item | Valor |
|---|---|
| URL | https://cloud-so-app-ul2l.onrender.com |
| Plano | Free (512 MB, 0,1 CPU anunciado) |
| Modelo | Container (processo contínuo) |
| Hostname | srv-db0nu15g1s2s73eu16bg-hibernate-69db9b8c78-g4j97 |
| Kernel | 7.0.0-1009-aws (#9-Ubuntu SMP PREEMPT) |
| Hardware (DMI) | Amazon EC2 / m6a.2xlarge |
| CPU | AMD EPYC 7R13, 8 núcleos lógicos, frequência não informada |
| Uso de CPU | 33 % a 65 % (núcleos de 15,6 % a 68,8 %) |
| Carga média | 9,34 / 7,41 / 6,37 (acima dos 8 núcleos no último minuto → fila) |
| Memória (host) | 30,65 GB total; 19,76 GB usados (64,5 %); 10,89 GB livres |
| Limites cgroup | 512 MB de memória (109,97 MB usados = 21,5 %); cota de 0,15 CPU |
| Uptime do SO | 34d 6h 45min (na Aula 06 eram 71 dias → outro host) |
| Processos / threads | 5 processos, 38 threads, 156,59 MB somados |
| Árvore da aplicação | node (81) ← sh (80) ← npm start (69) ← bash (1) |
| Outros processos | portdetectorv2 (PID 38, detecta a porta aberta pela aplicação); bash /home/render/graceful-shell-command.sh |
| Usuário | render, UID/GID 1000/1000, shell /bin/bash, home /opt/render |
| Rede | 10.31.0.138 em eth0 (IP privado), 4 endereços |
| Ambiente | Render, porta 10000 (PORT definido pela plataforma), NODE_ENV production |
| Container / hypervisor / kernel AWS | Sim / Sim / Sim |
| Variáveis | 134 no total; RENDER=true, RENDER_SERVICE_NAME, RENDER_EXTERNAL_URL, RENDER_GIT_COMMIT=ea119ed, RENDER_INSTANCE_ID… |
| Diretório | /opt/render/project/src, 17 arquivos (repositório completo, inclusive MANUAL.md e prints/) |
| Node.js | v22.23.3 (na Aula 06 era v24 → o "engines": "22.x" do package.json foi respeitado) |
| Processo Node | PID 81 / PPID 80 (dashboard) e PID 64 / PPID 63 com 26 s de atividade (último print) → o processo foi recriado entre os prints; RSS 60–65 MB; heap 7,73/8,59 MB |

Observações:
- Agora o DMI ficou acessível e confirma a instância **Amazon EC2 m6a.2xlarge** (8 vCPU AMD EPYC, 32 GiB) → Render roda sobre a AWS.
- O container enxerga 8 CPUs e 30,65 GB, mas só pode usar 0,15 CPU e 512 MB (cgroup).
- Hospedeiro sobrecarregado e compartilhado: carga média 9,34 em 8 núcleos, sendo a aplicação praticamente ociosa (0,1 % de CPU).
- Árvore de processos mais longa que a da Vercel: bash (PID 1, script do Render) → npm start → sh → node.
- A troca de PID (81 → 64) entre os prints foi um **"Service restarted by you"** às 18:18 (reinício manual pelo painel): processo novo, mesmo container/hostname.
- O painel avisa: "Your free instance will spin down with inactivity, which can delay requests by 50 seconds or more" (cold start oficial do plano Free).

### Deploy do commit ea119ed no Render (log em logs/render-deploy-ea119ed.log)

| Etapa | Horário (UTC) | Duração |
|---|---|---|
| Download do cache + clone do GitHub | 21:06:04,7 → 21:06:06,4 | ~1,7 s |
| Instalação do Node 22.23.3 (lido do "engines" do package.json) | 21:06:07,0 → 21:06:08,1 | ~1,1 s |
| Build: `npm install` (71 pacotes, já em cache) | 21:06:08,1 → 21:06:08,5 | 0,35 s |
| Upload do build | 21:06:09,0 → 21:06:11,1 | ~2,1 s |
| **Build total** | 21:06:04,7 → 21:06:11,1 | **~6,5 s** |
| Deploy: criação do container até `npm start` | 21:06:12,6 → 21:06:21,9 | ~9,3 s |
| Aplicação abre a porta 10000 | 21:06:24,7 | ~2,8 s após npm start |
| Health check aprovado ("Your service is live") | 21:06:33,8 | ~9,1 s após abrir a porta |
| **Total (do push ao ar)** | | **~29 s** |

- `WEB_CONCURRENCY=1` definido automaticamente "com base nas CPUs disponíveis na instância" → o Render dimensiona a aplicação pela cota (0,15 CPU), não pelas 8 CPUs que `os.cpus()` mostra.
- Comparação: Vercel ~28 s no total (build de 10–12 s, sem etapa de iniciar processo/health check, porque a função só é executada quando chega uma requisição).

## Teste de cold start (vídeo de 13/10/2026, 19:40, ~1h10 depois da última leitura)

Tempos medidos quadro a quadro no vídeo (precisão de ~0,25 s):

| | Vercel | Render |
|---|---|---|
| Do clique até a página (HTML) aparecer | ~1,0 s | ~0,75 s |
| Do clique até os dados (/api/info) aparecerem | **~1,5 s** | **~1,0 s** |
| Uptime do SO na leitura | 0h 0m | 103d 18h |
| Tempo de atividade do processo | **0 min 6 s** | **7 min 33 s** |
| Hostname | 169.254.35.55 (nova microVM) | srv-…-hibernate-7bfc569dd6-h7wwq (novo pod; antes era …-g4j97) |
| Kernel | 5.10.255-…amzn2 | **6.8.0-1057-aws** (antes 7.0.0-1009-aws → outro servidor físico) |
| Memória usada pelo container | — | 43,15 MB de 512 MB (8,4 %) |

Interpretação:
- **Vercel**: houve cold start de fato (processo com 6 s de vida, SO recém-iniciado), e mesmo assim os dados chegaram em ~1,5 s. A microVM Firecracker sobe em fração de segundo e a função é pequena.
- **Render**: a página abriu rápido (~1 s) porque o serviço **já estava acordado**: o processo tinha 7 min 33 s → foi recriado por volta de 19:33. Como o pod, o host (uptime 103 dias) e até o kernel mudaram, o serviço hibernou depois da última leitura (~18:27) e foi recriado em outro servidor. O cold start do Render (o painel fala em "50 segundos ou mais") aconteceu antes do vídeo e não foi cronometrado.
- Conclusão parcial: hibernação no Render recria o container inteiro (novo pod, novo host, novo kernel); na Vercel, cada instância é descartável e criada sob demanda em ~1 s.

## Pendente

- [x] Prints do Render (dashboard, SO/CPU/memória, ambiente, processo)
- [x] Print da tela Events/logs do Render (tempo de build)
- [x] Prints finais da Vercel (depois da correção)
- [ ] info-local.json, info-render.json, info-vercel.json
- [ ] Teste de cold start: tempo de primeira carga no Render e na Vercel após ~15 min sem acesso
