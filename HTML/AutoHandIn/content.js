chrome.action.onClicked.addListener(async (tab) => {
    if (!tab.id) return;

    console.log("🔹 Inyectando script en la página...");

    chrome.scripting.executeScript({
        target: { tabId: tab.id },
        func: pageScript
    });
});

// Esta función se ejecutará **directamente en la página**, igual que en la consola
function pageScript() {
    console.log("📌 Script inyectado en la página ejecutándose");

    let handInClicked = false;

    function hasFilesAdded(button) {
        return button && !button.disabled;
    }

    function checkAndClickHandIn(root = document) {
        if (handInClicked) return;

        const spans = Array.from(root.querySelectorAll('span.UywwFc-vQzf8d'));
        for (const span of spans) {
            if (span.textContent.trim() === "Hand in") {
                const button = span.closest('button');
                console.log("🔹 Botón encontrado:", button);

                if (button && hasFilesAdded(button)) {
                    console.log('✅ Botón Hand In listo. Haciendo clic...');
                    button.click();
                    handInClicked = true;
                    return;
                } else {
                    console.log("⚠️ Botón no habilitado aún");
                }
            }
        }
    }

    // Observador para cambios dinámicos en el DOM
    const observer = new MutationObserver((mutations) => {
        for (const mutation of mutations) {
            mutation.addedNodes.forEach(node => {
                if (node.nodeType === 1) {
                    checkAndClickHandIn(node);
                }
            });
        }
    });

    observer.observe(document.body, { childList: true, subtree: true });

    // Intento inicial por si el botón ya está presente
    checkAndClickHandIn();
}
